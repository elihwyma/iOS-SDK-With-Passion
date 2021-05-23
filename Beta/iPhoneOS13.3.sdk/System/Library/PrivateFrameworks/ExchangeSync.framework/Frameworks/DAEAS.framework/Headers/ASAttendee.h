/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSDate, NSMutableDictionary, NSString;

@interface ASAttendee : ASItem

{
    int _status;
    int _role;
    int _localId;
    NSString *_name;
    NSString *_email;
    NSDate *_proposedStartTime;
    NSDate *_proposedEndTime;
    NSString *_invitedBy;
    NSMutableDictionary *_placeHolder;
}

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) int status;
@property (nonatomic) int role;
@property (retain, nonatomic) NSDate *proposedStartTime;
@property (retain, nonatomic) NSDate *proposedEndTime;
@property (nonatomic) int localId;
@property (retain, nonatomic) NSString *invitedBy;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void *)arg2 isDefaultCalendar:(_Bool)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5;
- (id)initWithCalAttendee:(void *)arg1 parentEvent:(id)arg2;
- (id)fullEmailString;
- (id)copyOfSelfWithoutLocalID;
- (id)icsUserAddress;

@end
