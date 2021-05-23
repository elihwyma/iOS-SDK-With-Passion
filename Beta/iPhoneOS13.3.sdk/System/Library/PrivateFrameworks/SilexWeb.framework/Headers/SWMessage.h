/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SWMessage : NSObject

{
    NSString *_name;
    NSDictionary *_body;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *body;

- (id)initWithDictionary:(id)arg1;

@end
