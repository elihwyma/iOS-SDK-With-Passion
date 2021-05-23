/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject

{
    _Bool _colorOutput;
    CKLEventFilter *_filter;
    NSDateFormatter *_formatter;
    NSMutableDictionary *_processNamesByPath;
}

@property (retain, nonatomic) CKLEventFilter *filter;
@property (nonatomic, readonly) NSDateFormatter *formatter;
@property (retain, nonatomic) NSMutableDictionary *processNamesByPath;
@property (nonatomic) _Bool simulatorOnly;
@property (nonatomic) _Bool colorOutput;
@property (retain, nonatomic) NSString *processName;

- (void)finish;
- (void)_handleEvent:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)eventMatched:(id)arg1;
- (id)_processNameForPath:(id)arg1;

@end
