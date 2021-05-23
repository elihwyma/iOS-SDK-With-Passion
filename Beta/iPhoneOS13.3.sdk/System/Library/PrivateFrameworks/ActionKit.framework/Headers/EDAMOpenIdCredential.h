/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMOpenIdCredential : FATObject

{
    NSString *_tokenPayload;
    NSNumber *_serviceProvider;
}

@property (retain, nonatomic) NSString *tokenPayload;
@property (retain, nonatomic) NSNumber *serviceProvider;

+ (id)structName;
+ (id)structFields;

@end
