/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATException.h>

@class NSArray, NSString;

@interface EDAMInvalidContactsException : FATException

{
    NSArray *_contacts;
    NSString *_parameter;
    NSArray *_reasons;
}

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSString *parameter;
@property (retain, nonatomic) NSArray *reasons;

+ (id)structName;
+ (id)structFields;

@end
