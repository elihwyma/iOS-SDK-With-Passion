/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVSpecifiedLoggingIdentifierInternal, NSString;

@interface AVSpecifiedLoggingIdentifier : NSObject

{
    AVSpecifiedLoggingIdentifierInternal *_specifiedLoggingIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *name;

- (void)dealloc;
- (id)makeDerivedIdentifier;
- (id)initWithSpecifiedName:(id)arg1;

@end
