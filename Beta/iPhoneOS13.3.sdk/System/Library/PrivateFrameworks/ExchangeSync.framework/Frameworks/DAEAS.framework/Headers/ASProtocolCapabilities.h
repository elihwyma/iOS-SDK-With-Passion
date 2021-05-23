/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASProtocolCapabilities : NSObject

{
    NSString *_calConstraintsPlistPath;
    NSString *_abConstraintsPlistPath;
}

@property (retain, nonatomic) NSString *calConstraintsPlistPath;
@property (retain, nonatomic) NSString *abConstraintsPlistPath;

- (_Bool)supportsConversations;
- (_Bool)supportsMailboxSearch;
- (_Bool)supportsEmailFlagging;
- (_Bool)supportsDraftFolderSync;
- (_Bool)supportsSettingsCommand;
- (_Bool)supportsProtocolVersion:(id)arg1;
- (id)initWithProtocolVersionString:(id)arg1;
- (_Bool)supportsItemOperationsCommand;
- (_Bool)serverUpdatesAttendeeStatusOnEvents;
- (id)calendarConstraintsPath;
- (id)addressBookConstraintsPath;
- (_Bool)supportsNoteSyncing;
- (_Bool)supportsFreeBusyLookup;
- (id)_calConstraintsPlistPath;
- (id)_abConstraintsPlistPath;

@end
