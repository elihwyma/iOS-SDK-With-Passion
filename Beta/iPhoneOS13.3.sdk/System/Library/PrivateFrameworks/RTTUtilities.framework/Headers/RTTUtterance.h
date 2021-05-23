/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface RTTUtterance : NSObject

{
    _Bool _isMe;
    _Bool _ignoreTimeoutTemporarily;
    NSString *_contactPath;
    NSString *_text;
    NSDate *_lastChangeDate;
}

@property (retain, nonatomic) NSString *contactPath;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *lastChangeDate;
@property (nonatomic) _Bool isMe;
@property (nonatomic) _Bool ignoreTimeoutTemporarily;

+ (_Bool)supportsSecureCoding;
+ (_Bool)contactPathIsMe:(id)arg1;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isComplete;
- (_Bool)hasTimedOut;
- (void)updateText:(id)arg1;
- (void)resetTimeout;

@end
