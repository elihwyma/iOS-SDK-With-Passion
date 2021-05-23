/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHNonTextCandidateStroke.h>

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;

- (id)description;
- (_Bool)_removeSupportForStrokeIdentifier:(id)arg1;
- (_Bool)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (_Bool)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2;
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;

@end
