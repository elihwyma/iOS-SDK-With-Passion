/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface TITypingSessionAligned : NSObject

{
    _Bool _success;
    _Bool _containsCPEntries;
    NSArray *_layouts;
    NSLocale *_locale;
    NSArray *_alignedEntries;
    NSString *_alignedText;
    NSString *_highConfAlignedSubSegment;
    unsigned long long _firstCPEntryIndex;
}

@property (retain, nonatomic) NSArray *alignedEntries;
@property (retain, nonatomic) NSString *alignedText;
@property (retain, nonatomic) NSString *highConfAlignedSubSegment;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool containsCPEntries;
@property (nonatomic) unsigned long long firstCPEntryIndex;
@property (nonatomic, readonly) NSArray *layouts;
@property (nonatomic, readonly) NSLocale *locale;

+ (_Bool)supportsSecureCoding;
+ (id)alignedEntryForWord:(id)arg1;
+ (id)alignedPathTouchesForWord:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)arg1;
- (_Bool)compareForConfidenceContextA:(id)arg1 contextB:(id)arg2;
- (void)getAlignedTextAndConfidence;
- (id)textToAppendForEntry:(id)arg1 sessionIndx:(unsigned long long)arg2;
- (id)alignedWordsFromSession:(id)arg1;

@end
