/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SWDatastore : NSObject

{
    NSString *_JSONString;
}

@property (copy, nonatomic, readonly) NSString *JSONString;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithJSONString:(id)arg1;

@end
