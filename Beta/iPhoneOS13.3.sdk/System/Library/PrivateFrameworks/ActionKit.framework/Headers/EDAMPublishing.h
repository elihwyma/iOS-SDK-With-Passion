/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublishing : FATObject

{
    NSString *_uri;
    NSNumber *_order;
    NSNumber *_ascending;
    NSString *_publicDescription;
}

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *ascending;
@property (retain, nonatomic) NSString *publicDescription;

+ (id)structName;
+ (id)structFields;

@end
