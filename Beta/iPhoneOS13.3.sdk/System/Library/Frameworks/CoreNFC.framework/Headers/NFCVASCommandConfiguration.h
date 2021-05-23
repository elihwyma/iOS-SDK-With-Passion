/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSString, NSURL;

@interface NFCVASCommandConfiguration : NSObject <Swift>

{
    long long _mode;
    NSString *_passTypeIdentifier;
    NSURL *_url;
}

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSURL *url;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVASMode:(long long)arg1 passTypeIdentifier:(id)arg2 url:(id)arg3;

@end
