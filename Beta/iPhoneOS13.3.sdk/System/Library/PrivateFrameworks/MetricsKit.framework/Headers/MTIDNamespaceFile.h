/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTInterprocessChangeNotifier, NSDictionary, NSString;

@interface MTIDNamespaceFile : NSObject

{
    NSString *_fileName;
    NSDictionary *_options;
    MTInterprocessChangeNotifier *_changeNotifier;
}

@property (retain, nonatomic) NSString *fileName;
@property (retain) NSDictionary *options;
@property (retain, nonatomic) MTInterprocessChangeNotifier *changeNotifier;

+ (id)optionsFromData:(id)arg1 error:(id *)arg2;
+ (id)dataFromOptions:(id)arg1 error:(id *)arg2;

- (id)lockFileWithFlags:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithFileName:(id)arg1 shouldDisableChangeNotifications:(_Bool)arg2;
- (id)updateOptions:(id)arg1 resetSeed:(_Bool)arg2;
- (id)deleteFile;
- (id)optionsWithCachePolicy:(long long)arg1;

@end
