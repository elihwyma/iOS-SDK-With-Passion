/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCLocalArea : NSObject

{
    NSArray *_regionIds;
    NSString *_identifier;
    NSArray *_bbox;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *bbox;
@property (retain, nonatomic) NSArray *regionIds;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
- (_Bool)isValue:(double)arg1 betweenValue:(double)arg2 andValue:(double)arg3;

@end
