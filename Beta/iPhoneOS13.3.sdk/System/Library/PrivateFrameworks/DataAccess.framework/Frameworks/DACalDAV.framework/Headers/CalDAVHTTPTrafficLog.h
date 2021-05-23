/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject

{
    DACoreDAVLogger *_curLogger;
}

@property (retain, nonatomic) DACoreDAVLogger *curLogger;

+ (id)instance;

- (id)init;
- (_Bool)enabled;
- (void)logString:(id)arg1;
- (void)logData:(id)arg1;
- (void)finishSnippets;
- (void)logStringWithFormat:(id)arg1;

@end
