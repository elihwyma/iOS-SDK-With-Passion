/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, NSUUID;

@interface TTParagraphStyle : NSObject <Swift>

{
    _Bool _needsParagraphCleanup;
    _Bool _needsListCleanup;
    unsigned int _style;
    unsigned int _hints;
    unsigned long long _alignment;
    long long _writingDirection;
    unsigned long long _indent;
    unsigned long long _startingItemNumber;
}

@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int hints;
@property (nonatomic) _Bool needsParagraphCleanup;
@property (nonatomic) _Bool needsListCleanup;
@property (nonatomic, readonly) _Bool canIndent;
@property (nonatomic, readonly) _Bool isList;
@property (nonatomic, readonly) _Bool isHeader;
@property (nonatomic, readonly) _Bool uniqueToLine;
@property (nonatomic, readonly) _Bool preferSingleLine;
@property (nonatomic, readonly) _Bool wantsFollowingNewLine;
@property (nonatomic, readonly) NSUUID *trackingUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)defaultParagraphStyle;
+ (unsigned long long)textAlignmentForParagraphStyleAlignment:(int)arg1;
+ (int)paragraphStyleAlignmentForTextAlignment:(unsigned long long)arg1;
+ (id)paragraphStyleNamed:(unsigned int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)saveToArchive:(struct ParagraphStyle *)arg1;
- (id)initWithArchive:(const struct ParagraphStyle *)arg1;
- (_Bool)isEqualToParagraphStyle:(id)arg1;
- (_Bool)isEqualToModelParagraphStyle:(id)arg1;
- (_Bool)isUnknownStyle;
- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;

@end
