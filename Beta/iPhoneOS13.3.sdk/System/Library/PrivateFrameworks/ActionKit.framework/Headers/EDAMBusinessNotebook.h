/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessNotebook : FATObject

{
    NSString *_notebookDescription;
    NSNumber *_privilege;
    NSNumber *_recommended;
}

@property (retain, nonatomic) NSString *notebookDescription;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *recommended;

+ (id)structName;
+ (id)structFields;

@end
