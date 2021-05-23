/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STKSessionBehavior : NSObject

{
    double _timeout;
    _Bool _shouldSendResponseUponDisplay;
    _Bool _dismissesAfterUserEvent;
}

@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) _Bool shouldSendResponseUponDisplay;
@property (nonatomic, readonly) _Bool dismissesAfterUserEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
