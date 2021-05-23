/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface TITypologyRecord : NSObject

{
    double _timestamp;
    NSUUID *_recordID;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (_Bool)supportsSecureCoding;
+ (id)recordClasses;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)changedText;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (id)textSummaryForAutocorrection:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
