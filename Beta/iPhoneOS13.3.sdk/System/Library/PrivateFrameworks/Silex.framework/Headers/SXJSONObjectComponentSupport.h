/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXJSONObjectComponentSupport : NSObject

{
    NSString *_specVersion;
}

@property (nonatomic, readonly) NSString *specVersion;

+ (id)shared;

- (id)initWithSpecVersion:(id)arg1;
- (CDUnknownBlockType)objectValueClassBlock;
- (CDUnknownBlockType)purgeClassBlock;

@end
