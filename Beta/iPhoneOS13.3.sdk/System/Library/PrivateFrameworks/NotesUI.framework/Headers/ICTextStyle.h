/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ICTextStyle : NSObject

{
    unsigned int _ttStyle;
    NSDictionary *_attributes;
    NSString *_name;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSString *name;
@property unsigned int ttStyle;
@property (nonatomic, readonly) NSString *icaxStyleDescription;
@property (readonly) _Bool isTextList;

+ (id)titleStyle;
+ (id)headingStyle;
+ (id)subheadingStyle;
+ (id)bodyStyle;
+ (id)fixedWidthStyle;
+ (id)bulletStyle;
+ (id)dashStyle;
+ (id)numberedStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;
+ (id)defaultTextStyles;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)styleForNamedStyle:(unsigned int)arg1;
+ (void)setAutoListInsertionEnabled:(_Bool)arg1;
+ (_Bool)autoListInsertionEnabled;

@end
