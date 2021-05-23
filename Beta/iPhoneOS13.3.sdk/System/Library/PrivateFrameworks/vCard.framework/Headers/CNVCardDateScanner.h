/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNVCardDateScanner : NSObject

{
    NSString *_string;
    unsigned long long _position;
}

@property (readonly) unsigned long long position;

+ (id)scannerWithString:(id)arg1;

- (id)initWithString:(id)arg1;
- (_Bool)isAtEnd;
- (unsigned short)nextCharacter;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1;
- (long long)scanComponentValueOfLength:(unsigned long long)arg1;
- (long long)scanCalendarUnit:(unsigned long long)arg1;
- (_Bool)scanLeapMarker;

@end
