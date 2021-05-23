/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLProcessNetworkSource : NSObject

{
    NSDictionary *_descriptionDictionary;
    NSDictionary *_countsDictionary;
    struct __NStatSource *_source;
}

@property (copy, nonatomic) NSDictionary *descriptionDictionary;
@property (copy, nonatomic) NSDictionary *countsDictionary;
@property (nonatomic) struct __NStatSource *source;

- (id)initWithSource:(struct __NStatSource *)arg1;

@end
