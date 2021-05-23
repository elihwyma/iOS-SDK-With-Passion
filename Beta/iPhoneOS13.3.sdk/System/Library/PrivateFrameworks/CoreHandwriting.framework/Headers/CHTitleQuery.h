/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHQuery.h>

@class NSSet, NSString;

@interface CHTitleQuery : CHQuery

{
    NSString *_transcribedTitle;
    NSSet *_titleStrokeIdentifiers;
}

@property (copy, nonatomic, readonly) NSString *transcribedTitle;
@property (copy, nonatomic, readonly) NSSet *titleStrokeIdentifiers;

- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2;

@end
