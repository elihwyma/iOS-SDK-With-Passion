/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecFormattedText : WBSParsecModel

{
    _Bool _emphasized;
    NSString *_text;
    WBSParsecImageRepresentation *_glyphRepresentation;
    NSNumber *_spaceBeforeInPoints;
    NSNumber *_spaceAfterInPoints;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly, getter=isEmphasized) _Bool emphasized;
@property (nonatomic, readonly) WBSParsecImageRepresentation *glyphRepresentation;
@property (nonatomic, readonly) NSNumber *spaceBeforeInPoints;
@property (nonatomic, readonly) NSNumber *spaceAfterInPoints;

+ (id)schema;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)glyphWithSession:(id)arg1;

@end
