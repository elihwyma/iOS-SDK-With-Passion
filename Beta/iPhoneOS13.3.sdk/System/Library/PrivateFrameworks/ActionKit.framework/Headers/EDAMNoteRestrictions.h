/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteRestrictions : FATObject

{
    NSNumber *_noUpdateTitle;
    NSNumber *_noUpdateContent;
    NSNumber *_noEmail;
    NSNumber *_noShare;
    NSNumber *_noSharePublicly;
}

@property (retain, nonatomic) NSNumber *noUpdateTitle;
@property (retain, nonatomic) NSNumber *noUpdateContent;
@property (retain, nonatomic) NSNumber *noEmail;
@property (retain, nonatomic) NSNumber *noShare;
@property (retain, nonatomic) NSNumber *noSharePublicly;

+ (id)structName;
+ (id)structFields;

@end
