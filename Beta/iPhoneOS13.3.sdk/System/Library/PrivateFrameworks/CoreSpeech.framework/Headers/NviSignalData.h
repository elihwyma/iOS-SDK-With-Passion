/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

#import <CoreSpeech/Swift-Protocol.h>

@interface NviSignalData : NSObject <Swift>

{
    unsigned long long _sigType;
    unsigned long long _sigGenTs;
}

@property (nonatomic) unsigned long long sigType;
@property (nonatomic) unsigned long long sigGenTs;

+ (id)headerString;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalType:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (id)stringForLogging;

@end
