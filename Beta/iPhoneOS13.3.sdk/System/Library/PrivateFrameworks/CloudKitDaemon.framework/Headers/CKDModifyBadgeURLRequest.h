/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDModifyBadgeURLRequest : CKDURLRequest

{
    unsigned long long _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

- (int)operationType;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end
