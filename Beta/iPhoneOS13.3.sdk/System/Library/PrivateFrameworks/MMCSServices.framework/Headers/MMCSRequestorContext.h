/*
 Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

#import <Foundation/NSObject.h>

@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject

{
    MMCSController *_controller;
    NSString *_transferID;
}

@property (retain, readonly) MMCSController *controller;
@property (retain, readonly) NSString *transferID;

- (void)dealloc;
- (id)initWithController:(id)arg1 transferID:(id)arg2;
- (void)removeFromController;

@end
