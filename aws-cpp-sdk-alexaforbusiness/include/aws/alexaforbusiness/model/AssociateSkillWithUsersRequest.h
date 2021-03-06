﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API AssociateSkillWithUsersRequest : public AlexaForBusinessRequest
  {
  public:
    AssociateSkillWithUsersRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSkillWithUsers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the organization.</p>
     */
    inline const Aws::String& GetOrganizationArn() const{ return m_organizationArn; }

    /**
     * <p>The ARN of the organization.</p>
     */
    inline void SetOrganizationArn(const Aws::String& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }

    /**
     * <p>The ARN of the organization.</p>
     */
    inline void SetOrganizationArn(Aws::String&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::move(value); }

    /**
     * <p>The ARN of the organization.</p>
     */
    inline void SetOrganizationArn(const char* value) { m_organizationArnHasBeenSet = true; m_organizationArn.assign(value); }

    /**
     * <p>The ARN of the organization.</p>
     */
    inline AssociateSkillWithUsersRequest& WithOrganizationArn(const Aws::String& value) { SetOrganizationArn(value); return *this;}

    /**
     * <p>The ARN of the organization.</p>
     */
    inline AssociateSkillWithUsersRequest& WithOrganizationArn(Aws::String&& value) { SetOrganizationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organization.</p>
     */
    inline AssociateSkillWithUsersRequest& WithOrganizationArn(const char* value) { SetOrganizationArn(value); return *this;}


    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The private skill ID you want to make available to enrolled users.&gt;</p>
     */
    inline AssociateSkillWithUsersRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}

  private:

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet;

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
