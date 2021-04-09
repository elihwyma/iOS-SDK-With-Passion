
@protocol NFReaderSessionDelegate <NSObject>

@optional

- (void)readerSession:(NFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1;

@end
