/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCMessageEntry : NSObject

{
    unsigned long long m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
    NSString *additionalText;
}

@property (copy, nonatomic) NSString *additionalText;
@property (nonatomic) unsigned long long timeStamp;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)getCount;
- (id)getParameter:(unsigned int)arg1;
- (id)getMessageText;
- (id)affectedObjects;
- (void)mergeEntries:(id)arg1;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(char *)arg4;
- (void)addAffectedObject:(id)arg1;
- (long long)timeStampCompare:(id)arg1;
- (int)getMessageTag;
- (id)getAdditionalText;
- (unsigned long long)getParameterCount;

@end
