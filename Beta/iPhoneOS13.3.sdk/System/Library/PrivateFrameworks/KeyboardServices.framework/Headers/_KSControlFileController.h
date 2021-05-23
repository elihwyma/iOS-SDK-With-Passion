/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface _KSControlFileController : NSObject

{
    NSURL *_url;
}

- (id)description;
- (id)contents;
- (void)reset;
- (void)setContents:(id)arg1;
- (id)initWithName:(id)arg1 inDirectory:(id)arg2;
- (_Bool)checkIfExists;

@end
