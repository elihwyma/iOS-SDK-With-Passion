/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject

{
    NSNumber *_maxEntries;
    NSString *_prefix;
}

@property (retain, nonatomic) NSNumber *maxEntries;
@property (retain, nonatomic) NSString *prefix;

+ (id)structName;
+ (id)structFields;

@end
