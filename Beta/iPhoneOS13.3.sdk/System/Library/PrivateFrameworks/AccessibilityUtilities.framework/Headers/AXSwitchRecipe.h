/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface AXSwitchRecipe : NSObject

{
    NSString *_name;
    NSUUID *_uuid;
    NSArray *_mappings;
    double _timeout;
    NSString *_unlocalizedName;
    NSString *_menuIconIdentifier;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *mappings;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *unlocalizedName;
@property (nonatomic, readonly) _Bool shouldContinueScanning;
@property (copy, nonatomic) NSString *menuIconIdentifier;

+ (id)recipeWithDictionaryRepresentation:(id)arg1;

- (id)init;
- (id)description;
- (id)dictionaryRepresentation;

@end
