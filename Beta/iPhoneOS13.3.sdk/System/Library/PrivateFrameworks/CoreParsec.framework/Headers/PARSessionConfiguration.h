/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PARResultFactory;

@interface PARSessionConfiguration : NSObject

{
    _Bool _dontPreloadImages;
    _Bool _enablePersonalizedRanking;
    NSString *_identifier;
    NSString *_userAgent;
    id <PARResultFactory> _factory;
}

@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *userAgent;
@property (readonly) id <PARResultFactory> factory;
@property _Bool dontPreloadImages;
@property _Bool enablePersonalizedRanking;

+ (_Bool)supportsSecureCoding;
+ (id)defaultSessionConfiguration;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 userAgent:(id)arg2;
- (id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3;

@end
