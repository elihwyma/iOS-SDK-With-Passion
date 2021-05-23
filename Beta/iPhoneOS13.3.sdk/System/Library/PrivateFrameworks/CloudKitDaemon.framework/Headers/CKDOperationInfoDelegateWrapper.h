/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CKDOperationInfoDelegate;

__attribute__((visibility("hidden")))
@interface CKDOperationInfoDelegateWrapper : NSObject

{
    id <CKDOperationInfoDelegate> _delegate;
    NSString *_personaID;
}

@property (weak, nonatomic) id <CKDOperationInfoDelegate> delegate;
@property (copy, nonatomic) NSString *personaID;

- (id)initWithDelegate:(id)arg1;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;

@end
