/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface MBDebugContext : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (nonatomic, readonly) long long time;
@property (retain, nonatomic) NSDate *simulatedDate;

+ (id)defaultDebugContext;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setFlag:(id)arg1;
- (id)valueForName:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (void)removeValueForName:(id)arg1;
- (_Bool)isFlagSet:(id)arg1;
- (void)setBool:(_Bool)arg1 forName:(id)arg2;
- (_Bool)boolForName:(id)arg1;
- (void)setInt:(int)arg1 forName:(id)arg2;
- (int)intForName:(id)arg1;
- (void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3;
- (id)performSelectorForName:(id)arg1;
- (id)performSelectorForName:(id)arg1 withObject:(id)arg2;
- (_Bool)eval:(id)arg1;

@end
