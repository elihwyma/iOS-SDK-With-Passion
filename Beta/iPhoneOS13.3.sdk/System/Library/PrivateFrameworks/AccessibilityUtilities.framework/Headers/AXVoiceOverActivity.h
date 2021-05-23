/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSSet, NSString, NSUUID;

@interface AXVoiceOverActivity : NSObject

{
    _Bool _builtIn;
    NSString *_name;
    NSUUID *_uuid;
    NSSet *_textualContexts;
    NSSet *_appIdentifiers;
    NSUUID *_punctuationGroup;
    NSNumber *_tableHeaders;
    NSNumber *_tableRowAndColumn;
    NSNumber *_speakEmojis;
    NSString *_voiceIdentifier;
    NSNumber *_speechRate;
    NSNumber *_volume;
    NSNumber *_modifierKeys;
    NSNumber *_brailleStatusCellGeneral;
    NSNumber *_brailleStatusCellText;
    NSString *_brailleTable;
    NSNumber *_brailleOutput;
    NSNumber *_brailleInput;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSSet *textualContexts;
@property (retain, nonatomic) NSSet *appIdentifiers;
@property (retain, nonatomic) NSUUID *punctuationGroup;
@property (retain, nonatomic) NSNumber *tableHeaders;
@property (retain, nonatomic) NSNumber *tableRowAndColumn;
@property (retain, nonatomic) NSNumber *speakEmojis;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) NSNumber *speechRate;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *modifierKeys;
@property (retain, nonatomic) NSNumber *brailleStatusCellGeneral;
@property (retain, nonatomic) NSNumber *brailleStatusCellText;
@property (retain, nonatomic) NSString *brailleTable;
@property (retain, nonatomic) NSNumber *brailleOutput;
@property (retain, nonatomic) NSNumber *brailleInput;
@property (nonatomic) _Bool builtIn;

+ (_Bool)supportsSecureCoding;
+ (id)observerKeys;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)identicalProperty:(id)arg1 property2:(id)arg2;
- (_Bool)isIdenticalTo:(id)arg1;

@end
