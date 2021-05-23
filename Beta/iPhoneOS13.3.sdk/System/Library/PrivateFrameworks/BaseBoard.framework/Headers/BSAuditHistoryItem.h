/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject

{
    NSDate *_date;
    NSString *_description;
}

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)itemWithString:(id)arg1;
+ (id)itemWithWithFormat:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_timeFormatter;

@end
