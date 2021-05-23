/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGTitle : NSObject

{
    NSString *_stringValue;
    long long _category;
}

@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long category;

+ (id)titleWithString:(id)arg1 category:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
