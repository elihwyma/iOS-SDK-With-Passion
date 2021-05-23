/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKMessageEntryViewLayoutMetrics : NSObject

{
    double _defaultEntryContentViewHeight;
    double _defaultSubjectEntryContentViewHeight;
    double _defaultEntryViewHeight;
    double _defaultSubjectEntryViewHeight;
    struct UIEdgeInsets _entryViewContentInsets;
    struct UIEdgeInsets _entryViewTextAlignmentInsets;
}

@property (nonatomic, readonly) struct UIEdgeInsets entryViewContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets entryViewTextAlignmentInsets;
@property (nonatomic, readonly) double defaultEntryContentViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryContentViewHeight;
@property (nonatomic, readonly) double defaultEntryViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryViewHeight;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)calculateTextMetrics;

@end
