/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IMRKResponse : NSObject

{
    NSString *_string;
    NSDictionary *_attributes;
    NSString *_category;
}

@property (readonly) NSString *string;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *category;

+ (id)alloc;
+ (Class)__class;

@end
