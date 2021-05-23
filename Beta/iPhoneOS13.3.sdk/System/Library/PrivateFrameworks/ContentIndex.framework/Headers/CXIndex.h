/*
 Image: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CXIndex : NSObject

{
    int _cancel;
    NSString *_path;
    struct __SI *_skRef;
}

@property (nonatomic, readonly) struct __SI *skRef;
@property (nonatomic) int cancel;
@property (nonatomic, readonly) NSString *path;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (_Bool)commit;
- (void)close:(unsigned int)arg1;
- (_Bool)flush:(unsigned int)arg1;
- (_Bool)open:(unsigned int)arg1 recoveredTransactionId:(unsigned int *)arg2;
- (_Bool)create:(unsigned int)arg1;
- (int *)cancelPtr;
- (struct __SI **)siIndexPtr;
- (_Bool)compact:(unsigned int)arg1;
- (_Bool)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned int *)arg4;
- (void)deleteDocumentByName:(id)arg1;
- (void)deleteDocument:(unsigned int)arg1;
- (_Bool)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned int)arg3 transaction:(unsigned int *)arg4;
- (_Bool)addContent:(id)arg1 transaction:(unsigned int *)arg2;

@end
