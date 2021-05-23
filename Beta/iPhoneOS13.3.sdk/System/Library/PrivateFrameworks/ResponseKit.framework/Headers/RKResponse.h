/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface RKResponse : NSObject

{
    NSString *_string;
    NSDictionary *_attributes;
    NSString *_category;
}

@property (retain) NSString *string;
@property (retain) NSDictionary *attributes;
@property (retain) NSString *category;

- (id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3;

@end
