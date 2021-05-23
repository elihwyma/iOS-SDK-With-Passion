/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFUbiquityLogging : NSObject

{
    int _desiredLogLevel;
}

@property (nonatomic) int desiredLogLevel;

+ (void)initialize;
+ (_Bool)canLogMessageAtLevel:(int)arg1;
+ (void)setLoggingLevel:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)userDefaultsChanged:(id)arg1;
- (void)checkUserDefaults;

@end
