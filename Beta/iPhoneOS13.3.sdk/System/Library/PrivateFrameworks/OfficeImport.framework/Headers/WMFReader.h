/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject

{
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    const char *m_pBuffer;
    unsigned int m_cursor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)play:(id)arg1;
- (id)initWithWMFPlayer:(id)arg1;
- (int)playHeaders;
- (int)playRecord;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (int)moveDataCursor:(unsigned int)arg1;

@end
