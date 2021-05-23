/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASRecurrence.h>

@class ASToDo, NSDate, NSNumber;

@interface ASToDoRecurrence : ASRecurrence

{
    NSDate *_startTime;
    NSNumber *_regenerate;
    NSNumber *_deadOccur;
    ASToDo *_parentToDo;
}

@property (weak, nonatomic) ASToDo *parentToDo;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSNumber *regenerate;
@property (retain, nonatomic) NSNumber *deadOccur;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)initWithParentToDo:(id)arg1;
- (void)setUntilString:(id)arg1;
- (void)setStartTimeString:(id)arg1;
- (id)initWithCalRecurrence:(void *)arg1 parentToDo:(id)arg2;
- (void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4;
- (_Bool)_requiresParentEvent;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1;
- (id)_transformedUntilDateForActiveSync:(id)arg1;

@end
