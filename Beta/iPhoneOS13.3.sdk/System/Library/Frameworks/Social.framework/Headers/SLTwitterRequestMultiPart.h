/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SLTwitterRequestMultiPart : NSObject

{
    NSData *_payload;
    NSString *_name;
    NSString *_type;
}

@property (retain, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;

+ (id)multipartBoundary;
+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3;

- (id)partData;
- (id)imagePartData;
- (id)formPartData;

@end
