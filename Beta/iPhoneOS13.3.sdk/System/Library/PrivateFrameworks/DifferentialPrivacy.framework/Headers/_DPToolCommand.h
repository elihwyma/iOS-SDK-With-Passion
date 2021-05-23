/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject

{
    _Bool _writeOK;
    NSString *_action;
    NSString *_arguments;
    NSString *_recordKey;
    NSString *_databasePath;
    _DPStorage *_storage;
}

@property (nonatomic, readonly) _DPStorage *storage;
@property (copy, nonatomic, readonly) NSString *action;
@property (copy, nonatomic, readonly) NSString *arguments;
@property (copy, nonatomic, readonly) NSString *recordKey;
@property (copy, nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) _Bool writeOK;

+ (id)supportedCommands;
+ (id)command:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(_Bool)arg5;

- (id)init;
- (id)description;
- (id)initWithAction:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(_Bool)arg5;
- (_Bool)recordNumbers:(id)arg1 forKey:(id)arg2;
- (_Bool)recordBitValues:(id)arg1 forKey:(id)arg2;
- (_Bool)recordStrings:(id)arg1 forKey:(id)arg2;
- (_Bool)recordWords:(id)arg1 forKey:(id)arg2;
- (id)queryForKey:(id)arg1;
- (_Bool)submitRecordsForKey:(id)arg1;
- (_Bool)listReportsFor:(id)arg1;
- (_Bool)listKeys;
- (_Bool)executeCommand;

@end
