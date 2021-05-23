/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class CLSClass, NSArray, NSDate, NSError, NSString;

@interface CLSHandout : CLSObject

{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    _Bool _reviewed;
    NSDate *_dateOfPublication;
    long long _state;
    long long _publishingState;
    NSError *_publishError;
    NSDate *_dateLastReviewed;
}

@property (nonatomic, readonly) CLSClass *effectiveClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSDate *dateOfPublication;
@property (nonatomic) long long state;
@property (nonatomic) long long publishingState;
@property (retain, nonatomic) NSError *publishError;
@property (retain, nonatomic) NSDate *dateLastReviewed;
@property (retain, nonatomic) NSDate *lastReviewedDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *instructions;
@property (retain, nonatomic) NSDate *dueDate;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, getter=isReviewed) _Bool reviewed;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)mergeWithObject:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (void)addHandoutAttachment:(id)arg1;
- (void)removeHandoutAttachment:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (void)removeHandoutRecipient:(id)arg1;

@end
