/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NWInterfaceSource : NSObject

{
    unsigned int _ifIndex;
    unsigned long long _srcRef;
    unsigned long long _threshold;
}

@property unsigned long long srcRef;
@property unsigned long long threshold;
@property unsigned int ifIndex;

@end
