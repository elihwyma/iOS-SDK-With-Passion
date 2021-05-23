/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPBFileDescriptor : NSObject

{
    NSString *package_;
    NSString *objcPrefix_;
    unsigned char syntax_;
}

@property (copy, nonatomic, readonly) NSString *package;
@property (copy, nonatomic, readonly) NSString *objcPrefix;
@property (nonatomic, readonly) unsigned char syntax;

- (void)dealloc;
- (id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3;
- (id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2;

@end
