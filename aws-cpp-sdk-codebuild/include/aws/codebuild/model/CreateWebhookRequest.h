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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API CreateWebhookRequest : public CodeBuildRequest
  {
  public:
    CreateWebhookRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebhook"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline CreateWebhookRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline CreateWebhookRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline CreateWebhookRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline const Aws::String& GetBranchFilter() const{ return m_branchFilter; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline void SetBranchFilter(const Aws::String& value) { m_branchFilterHasBeenSet = true; m_branchFilter = value; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline void SetBranchFilter(Aws::String&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::move(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline void SetBranchFilter(const char* value) { m_branchFilterHasBeenSet = true; m_branchFilter.assign(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline CreateWebhookRequest& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline CreateWebhookRequest& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>
     */
    inline CreateWebhookRequest& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
