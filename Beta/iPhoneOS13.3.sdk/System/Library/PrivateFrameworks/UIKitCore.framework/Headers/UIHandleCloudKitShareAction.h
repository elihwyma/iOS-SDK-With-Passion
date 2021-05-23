/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UIHandleCloudKitShareAction : BSAction

{
    CKShareMetadata *_cachedMetadata;
}

@property (nonatomic, readonly) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)arg1;
+ (void)loadCloudKitFramework;

- (id)data;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithShareMetadata:(id)arg1;

@end
