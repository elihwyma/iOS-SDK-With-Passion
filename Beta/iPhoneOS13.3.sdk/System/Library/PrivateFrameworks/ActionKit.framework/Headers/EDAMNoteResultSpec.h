/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteResultSpec : FATObject

{
    NSNumber *_includeContent;
    NSNumber *_includeResourcesData;
    NSNumber *_includeResourcesRecognition;
    NSNumber *_includeResourcesAlternateData;
    NSNumber *_includeSharedNotes;
    NSNumber *_includeNoteAppDataValues;
    NSNumber *_includeResourceAppDataValues;
    NSNumber *_includeAccountLimits;
}

@property (retain, nonatomic) NSNumber *includeContent;
@property (retain, nonatomic) NSNumber *includeResourcesData;
@property (retain, nonatomic) NSNumber *includeResourcesRecognition;
@property (retain, nonatomic) NSNumber *includeResourcesAlternateData;
@property (retain, nonatomic) NSNumber *includeSharedNotes;
@property (retain, nonatomic) NSNumber *includeNoteAppDataValues;
@property (retain, nonatomic) NSNumber *includeResourceAppDataValues;
@property (retain, nonatomic) NSNumber *includeAccountLimits;

+ (id)structName;
+ (id)structFields;

@end
