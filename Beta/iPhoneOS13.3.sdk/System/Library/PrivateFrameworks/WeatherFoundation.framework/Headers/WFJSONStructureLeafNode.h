/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WFJSONStructureLeafNode : NSObject

{
    _Bool _required;
}

@property (nonatomic, getter=isRequired) _Bool required;

+ (id)requiredLeafNode;
+ (id)optionalLeafNode;

@end
